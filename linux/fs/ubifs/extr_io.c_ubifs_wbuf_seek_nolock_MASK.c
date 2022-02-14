
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_wbuf {int lnum; scalar_t__ used; int offs; int size; int avail; int lock; int jhead; struct ubifs_info* c; } ;
struct ubifs_info {int leb_cnt; int leb_size; int min_io_size; int max_write_size; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ubifs_info const*,int) ;

int FUNC_6(struct ubifs_wbuf *VAR_0, int VAR_1, int VAR_2)
{
 const struct ubifs_info *VAR_3 = VAR_0->c;

 FUNC_1("LEB %d:%d, jhead %s", VAR_1, VAR_2, FUNC_2(VAR_0->jhead));
 FUNC_5(VAR_3, VAR_1 >= 0 && VAR_1 < VAR_3->leb_cnt);
 FUNC_5(VAR_3, VAR_2 >= 0 && VAR_2 <= VAR_3->leb_size);
 FUNC_5(VAR_3, VAR_2 % VAR_3->min_io_size == 0 && !(VAR_2 & 7));
 FUNC_5(VAR_3, VAR_1 != VAR_0->lnum);
 FUNC_5(VAR_3, VAR_0->used == 0);

 FUNC_3(&VAR_0->lock);
 VAR_0->lnum = VAR_1;
 VAR_0->offs = VAR_2;
 if (VAR_3->leb_size - VAR_0->offs < VAR_3->max_write_size)
  VAR_0->size = VAR_3->leb_size - VAR_0->offs;
 else if (VAR_0->offs & (VAR_3->max_write_size - 1))
  VAR_0->size = FUNC_0(VAR_0->offs, VAR_3->max_write_size) - VAR_0->offs;
 else
  VAR_0->size = VAR_3->max_write_size;
 VAR_0->avail = VAR_0->size;
 VAR_0->used = 0;
 FUNC_4(&VAR_0->lock);

 return 0;
}
