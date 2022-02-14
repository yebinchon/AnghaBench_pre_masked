
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hmcdrv_ftp_cmdspec {scalar_t__ id; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ (* hmcdrv_cache_ftpfunc ) (struct hmcdrv_ftp_cmdspec const*,int *) ;
struct TYPE_2__ {int ofs; int fsize; int id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct hmcdrv_ftp_cmdspec const*,scalar_t__ (*) (struct hmcdrv_ftp_cmdspec const*,int *)) ;
 TYPE_1__ VAR_5 ;
 scalar_t__ FUNC_1 (struct hmcdrv_ftp_cmdspec const*) ;

ssize_t FUNC_2(const struct hmcdrv_ftp_cmdspec *VAR_6,
    hmcdrv_cache_ftpfunc VAR_7)
{
 ssize_t VAR_8;

 if ((VAR_6->id == VAR_0) ||
     (VAR_6->id == VAR_2) ||
     (VAR_6->id == VAR_1)) {

  VAR_8 = FUNC_1(VAR_6);

  if (VAR_8 >= 0)
   return VAR_8;

  VAR_8 = FUNC_0(VAR_6, VAR_7);

  if (VAR_8 >= 0)
   return VAR_8;

 } else {
  VAR_8 = VAR_7(VAR_6, ((void*)0));
 }




 VAR_5.id = VAR_3;
 VAR_5.fsize = VAR_4;
 VAR_5.ofs = -1;

 return VAR_8;
}
