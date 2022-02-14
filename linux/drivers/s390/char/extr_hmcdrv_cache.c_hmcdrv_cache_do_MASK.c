
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef struct hmcdrv_ftp_cmdspec {scalar_t__ len; int ofs; int fname; int id; int buf; } const hmcdrv_ftp_cmdspec ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ (* hmcdrv_cache_ftpfunc ) (struct hmcdrv_ftp_cmdspec const*,int *) ;
struct TYPE_2__ {scalar_t__ len; int ofs; int fsize; int id; int fname; int content; scalar_t__ timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__,int ,...) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_3(const struct hmcdrv_ftp_cmdspec *VAR_5,
          hmcdrv_cache_ftpfunc VAR_6)
{
 ssize_t VAR_7;






 if ((VAR_5->len > 0) && (VAR_3.len >= VAR_5->len)) {





  struct hmcdrv_ftp_cmdspec VAR_8 = *VAR_5;
  VAR_8.buf = VAR_3.content;
  VAR_8.len = VAR_3.len;

  VAR_7 = VAR_6(&VAR_8, &VAR_3.fsize);

  if (VAR_7 > 0) {
   FUNC_1("caching %zd bytes content for '%s'\n",
     VAR_7, VAR_5->fname);

   if (VAR_7 > VAR_5->len)
    VAR_7 = VAR_5->len;

   VAR_3.ofs = VAR_5->ofs;
   VAR_3.timeout = VAR_4 +
    VAR_0 * VAR_2;
   FUNC_0(VAR_5->buf, VAR_3.content, VAR_7);
  }
 } else {
  VAR_7 = VAR_6(VAR_5, &VAR_3.fsize);
  VAR_3.ofs = -1;
 }

 if (VAR_7 > 0) {



  FUNC_2(VAR_3.fname, VAR_5->fname,
   VAR_1);
  VAR_3.id = VAR_5->id;
  FUNC_1("caching cmd %d, file size %zu for '%s'\n",
    VAR_5->id, VAR_3.fsize, VAR_5->fname);
 }

 return VAR_7;
}
