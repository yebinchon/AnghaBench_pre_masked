
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_wbuf {scalar_t__ lnum; int offs; int used; int avail; int size; void* buf; int (* sync_callback ) (struct ubifs_info*,scalar_t__,int,int ) ;int lock; scalar_t__ next_ino; int jhead; int io_mutex; struct ubifs_info* c; } ;
struct ubifs_info {scalar_t__ leb_cnt; int min_io_size; int leb_size; int max_write_size; int max_write_shift; scalar_t__ ro_error; int space_fixup; int ro_mount; int ro_media; } ;
struct ubifs_ch {int node_type; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ubifs_wbuf*) ;
 int FUNC_2 (char*,int,scalar_t__,int,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (void*,void*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ubifs_info*,struct ubifs_wbuf*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct ubifs_info*,scalar_t__,int,int ) ;
 int FUNC_12 (struct ubifs_info*,int) ;
 int FUNC_13 (struct ubifs_info*,scalar_t__) ;
 int FUNC_14 (struct ubifs_info*,void*) ;
 int FUNC_15 (struct ubifs_info*,char*,int,scalar_t__,int,int) ;
 int FUNC_16 (struct ubifs_info*,scalar_t__,void*,int,int) ;

int FUNC_17(struct ubifs_wbuf *VAR_2, void *VAR_3, int VAR_4)
{
 struct ubifs_info *VAR_5 = VAR_2->c;
 int VAR_6, VAR_7, VAR_8, VAR_9 = FUNC_0(VAR_4, 8);

 FUNC_2("%d bytes (%s) to jhead %s wbuf at LEB %d:%d", VAR_4,
        FUNC_4(((struct ubifs_ch *)VAR_3)->node_type),
        FUNC_3(VAR_2->jhead), VAR_2->lnum, VAR_2->offs + VAR_2->used);
 FUNC_12(VAR_5, VAR_4 > 0 && VAR_2->lnum >= 0 && VAR_2->lnum < VAR_5->leb_cnt);
 FUNC_12(VAR_5, VAR_2->offs >= 0 && VAR_2->offs % VAR_5->min_io_size == 0);
 FUNC_12(VAR_5, !(VAR_2->offs & 7) && VAR_2->offs <= VAR_5->leb_size);
 FUNC_12(VAR_5, VAR_2->avail > 0 && VAR_2->avail <= VAR_2->size);
 FUNC_12(VAR_5, VAR_2->size >= VAR_5->min_io_size);
 FUNC_12(VAR_5, VAR_2->size <= VAR_5->max_write_size);
 FUNC_12(VAR_5, VAR_2->size % VAR_5->min_io_size == 0);
 FUNC_12(VAR_5, FUNC_7(&VAR_2->io_mutex));
 FUNC_12(VAR_5, !VAR_5->ro_media && !VAR_5->ro_mount);
 FUNC_12(VAR_5, !VAR_5->space_fixup);
 if (VAR_5->leb_size - VAR_2->offs >= VAR_5->max_write_size)
  FUNC_12(VAR_5, !((VAR_2->offs + VAR_2->size) % VAR_5->max_write_size));

 if (VAR_5->leb_size - VAR_2->offs - VAR_2->used < VAR_9) {
  VAR_6 = -VAR_0;
  goto out;
 }

 FUNC_1(VAR_2);

 if (VAR_5->ro_error)
  return -VAR_1;

 if (VAR_9 <= VAR_2->avail) {




  FUNC_6(VAR_2->buf + VAR_2->used, VAR_3, VAR_4);

  if (VAR_9 == VAR_2->avail) {
   FUNC_2("flush jhead %s wbuf to LEB %d:%d",
          FUNC_3(VAR_2->jhead), VAR_2->lnum, VAR_2->offs);
   VAR_6 = FUNC_16(VAR_5, VAR_2->lnum, VAR_2->buf,
           VAR_2->offs, VAR_2->size);
   if (VAR_6)
    goto out;

   FUNC_9(&VAR_2->lock);
   VAR_2->offs += VAR_2->size;
   if (VAR_5->leb_size - VAR_2->offs >= VAR_5->max_write_size)
    VAR_2->size = VAR_5->max_write_size;
   else
    VAR_2->size = VAR_5->leb_size - VAR_2->offs;
   VAR_2->avail = VAR_2->size;
   VAR_2->used = 0;
   VAR_2->next_ino = 0;
   FUNC_10(&VAR_2->lock);
  } else {
   FUNC_9(&VAR_2->lock);
   VAR_2->avail -= VAR_9;
   VAR_2->used += VAR_9;
   FUNC_10(&VAR_2->lock);
  }

  goto exit;
 }

 VAR_7 = 0;

 if (VAR_2->used) {





  FUNC_2("flush jhead %s wbuf to LEB %d:%d",
         FUNC_3(VAR_2->jhead), VAR_2->lnum, VAR_2->offs);
  FUNC_6(VAR_2->buf + VAR_2->used, VAR_3, VAR_2->avail);
  VAR_6 = FUNC_16(VAR_5, VAR_2->lnum, VAR_2->buf, VAR_2->offs,
          VAR_2->size);
  if (VAR_6)
   goto out;

  VAR_2->offs += VAR_2->size;
  VAR_4 -= VAR_2->avail;
  VAR_9 -= VAR_2->avail;
  VAR_7 += VAR_2->avail;
 } else if (VAR_2->offs & (VAR_5->max_write_size - 1)) {







  FUNC_2("write %d bytes to LEB %d:%d",
         VAR_2->size, VAR_2->lnum, VAR_2->offs);
  VAR_6 = FUNC_16(VAR_5, VAR_2->lnum, VAR_3, VAR_2->offs,
          VAR_2->size);
  if (VAR_6)
   goto out;

  VAR_2->offs += VAR_2->size;
  VAR_4 -= VAR_2->size;
  VAR_9 -= VAR_2->size;
  VAR_7 += VAR_2->size;
 }







 VAR_8 = VAR_9 >> VAR_5->max_write_shift;
 if (VAR_8) {
  VAR_8 <<= VAR_5->max_write_shift;
  FUNC_2("write %d bytes to LEB %d:%d", VAR_8, VAR_2->lnum,
         VAR_2->offs);
  VAR_6 = FUNC_16(VAR_5, VAR_2->lnum, VAR_3 + VAR_7,
          VAR_2->offs, VAR_8);
  if (VAR_6)
   goto out;
  VAR_2->offs += VAR_8;
  VAR_9 -= VAR_8;
  VAR_4 -= VAR_8;
  VAR_7 += VAR_8;
 }

 FUNC_9(&VAR_2->lock);
 if (VAR_9)





  FUNC_6(VAR_2->buf, VAR_3 + VAR_7, VAR_4);

 if (VAR_5->leb_size - VAR_2->offs >= VAR_5->max_write_size)
  VAR_2->size = VAR_5->max_write_size;
 else
  VAR_2->size = VAR_5->leb_size - VAR_2->offs;
 VAR_2->avail = VAR_2->size - VAR_9;
 VAR_2->used = VAR_9;
 VAR_2->next_ino = 0;
 FUNC_10(&VAR_2->lock);

exit:
 if (VAR_2->sync_callback) {
  int VAR_10 = VAR_5->leb_size - VAR_2->offs - VAR_2->used;

  VAR_6 = VAR_2->sync_callback(VAR_5, VAR_2->lnum, VAR_10, 0);
  if (VAR_6)
   goto out;
 }

 if (VAR_2->used)
  FUNC_8(VAR_5, VAR_2);

 return 0;

out:
 FUNC_15(VAR_5, "cannot write %d bytes to LEB %d:%d, error %d",
    VAR_4, VAR_2->lnum, VAR_2->offs, VAR_6);
 FUNC_14(VAR_5, VAR_3);
 FUNC_5();
 FUNC_13(VAR_5, VAR_2->lnum);
 return VAR_6;
}
