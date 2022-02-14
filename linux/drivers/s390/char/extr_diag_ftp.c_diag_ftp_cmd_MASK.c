
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hmcdrv_ftp_cmdspec {int id; int buf; int len; int ofs; int fname; } ;
struct diag_ftp_ldfpl {int transferred; size_t fsize; int bufaddr; int buflen; int offset; int fident; } ;
typedef int ssize_t ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 int FUNC_0 (struct diag_ftp_ldfpl*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 unsigned long VAR_12 ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

ssize_t FUNC_8(const struct hmcdrv_ftp_cmdspec *VAR_13, size_t *VAR_14)
{
 struct diag_ftp_ldfpl *VAR_15;
 ssize_t VAR_16;







 FUNC_3(&VAR_10);

 VAR_15 = (void *) FUNC_2(VAR_7 | VAR_6);
 if (!VAR_15) {
  VAR_16 = -VAR_4;
  goto out;
 }

 VAR_16 = FUNC_5(VAR_15->fident, VAR_13->fname, sizeof(VAR_15->fident));
 if (VAR_16 >= VAR_8) {
  VAR_16 = -VAR_1;
  goto out_free;
 }

 VAR_15->transferred = 0;
 VAR_15->fsize = 0;
 VAR_15->offset = VAR_13->ofs;
 VAR_15->buflen = VAR_13->len;
 VAR_15->bufaddr = FUNC_6(VAR_13->buf);

 VAR_16 = FUNC_0(VAR_15, VAR_13->id);
 if (VAR_16)
  goto out_free;





 FUNC_7(&VAR_10);
 switch (VAR_11) {
 case 128:
  VAR_16 = VAR_15->transferred;
  if (VAR_14)
   *VAR_14 = VAR_15->fsize;
  break;
 case 130:
  VAR_16 = -VAR_5;
  break;
 case 129:
  VAR_16 = -VAR_0;
  break;
 case 131:
  VAR_16 = -VAR_3;
  break;
 default:
  VAR_16 = -VAR_2;
  break;
 }

out_free:
 FUNC_1((unsigned long) VAR_15);
out:
 return VAR_16;
}
