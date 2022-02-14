
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uid_t ;
typedef int u_short ;
struct inode {int i_mode; int i_size; int i_blocks; void* i_ctime; void* i_mtime; void* i_atime; int i_gid; int i_uid; } ;
struct TYPE_2__ {int tv_sec; } ;
struct coda_vattr {int va_type; int va_mode; int va_uid; int va_gid; int va_nlink; int va_size; TYPE_1__ va_ctime; TYPE_1__ va_mtime; TYPE_1__ va_atime; } ;
typedef int gid_t ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (TYPE_1__) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct inode*,int) ;

void FUNC_4(struct inode *VAR_4, struct coda_vattr *VAR_5)
{
        int VAR_6;



        switch (VAR_5->va_type) {
        case 129:
                VAR_6 = 0;
                break;
        case 128:
                VAR_6 = VAR_2;
                break;
        case 131:
                VAR_6 = VAR_0;
                break;
        case 130:
                VAR_6 = VAR_1;
                break;
        default:
                VAR_6 = 0;
        }
 VAR_4->i_mode |= VAR_6;

 if (VAR_5->va_mode != (u_short) -1)
         VAR_4->i_mode = VAR_5->va_mode | VAR_6;
        if (VAR_5->va_uid != -1)
         VAR_4->i_uid = FUNC_2(&VAR_3, (uid_t) VAR_5->va_uid);
        if (VAR_5->va_gid != -1)
         VAR_4->i_gid = FUNC_1(&VAR_3, (gid_t) VAR_5->va_gid);
 if (VAR_5->va_nlink != -1)
  FUNC_3(VAR_4, VAR_5->va_nlink);
 if (VAR_5->va_size != -1)
         VAR_4->i_size = VAR_5->va_size;
 if (VAR_5->va_size != -1)
  VAR_4->i_blocks = (VAR_5->va_size + 511) >> 9;
 if (VAR_5->va_atime.tv_sec != -1)
  VAR_4->i_atime = FUNC_0(VAR_5->va_atime);
 if (VAR_5->va_mtime.tv_sec != -1)
  VAR_4->i_mtime = FUNC_0(VAR_5->va_mtime);
        if (VAR_5->va_ctime.tv_sec != -1)
  VAR_4->i_ctime = FUNC_0(VAR_5->va_ctime);
}
