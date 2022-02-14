
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hmcdrv_ftp_cmdspec {int len; scalar_t__ ofs; int fname; int id; } ;
typedef int ssize_t ;
struct TYPE_2__ {int transfer; } ;


 int VAR_0 ;
 int FUNC_0 (struct hmcdrv_ftp_cmdspec const*,int ) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int ,long long,int ) ;

ssize_t FUNC_4(const struct hmcdrv_ftp_cmdspec *VAR_4)
{
 ssize_t VAR_5;

 FUNC_1(&VAR_2);

 if (VAR_1 && VAR_3) {
  FUNC_3("starting transfer, cmd %d for '%s' at %lld with %zd bytes\n",
    VAR_4->id, VAR_4->fname, (long long) VAR_4->ofs, VAR_4->len);
  VAR_5 = FUNC_0(VAR_4, VAR_1->transfer);
 } else {
  VAR_5 = -VAR_0;
 }

 FUNC_2(&VAR_2);
 return VAR_5;
}
