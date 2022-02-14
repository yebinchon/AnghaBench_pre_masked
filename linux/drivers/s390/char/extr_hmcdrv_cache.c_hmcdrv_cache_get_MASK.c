
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hmcdrv_ftp_cmdspec {scalar_t__ id; scalar_t__ ofs; int len; int buf; int fname; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {scalar_t__ id; scalar_t__ fsize; scalar_t__ ofs; scalar_t__ len; scalar_t__ content; int fname; int timeout; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int) ;
 int FUNC_1 (char*,int ,int,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static ssize_t FUNC_4(const struct hmcdrv_ftp_cmdspec *VAR_2)
{
 loff_t VAR_3;
 ssize_t VAR_4;

 if ((VAR_2->id != VAR_0.id) ||
     FUNC_2(VAR_0.fname, VAR_2->fname))
  return -1;

 if (VAR_2->ofs >= VAR_0.fsize)
  return 0;

 if ((VAR_0.ofs < 0) ||
     FUNC_3(VAR_1, VAR_0.timeout))
  return -1;




 VAR_4 = VAR_0.fsize - VAR_2->ofs;

 if (VAR_4 > VAR_2->len)
  VAR_4 = VAR_2->len;




 VAR_3 = VAR_2->ofs - VAR_0.ofs;

 if ((VAR_3 >= 0) &&
     ((VAR_3 + VAR_4) <= VAR_0.len)) {

  FUNC_0(VAR_2->buf,
         VAR_0.content + VAR_3,
         VAR_4);
  FUNC_1("using cached content of '%s', returning %zd/%zd bytes\n",
    VAR_0.fname, VAR_4,
    VAR_0.fsize);

  return VAR_4;
 }

 return -1;
}
