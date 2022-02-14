
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pcx; int length; int fsize; int ldflg; } ;
struct TYPE_4__ {TYPE_1__ ftp; } ;
struct sclp_diag_evbuf {scalar_t__ route; TYPE_2__ mdd; } ;
struct evbuf_header {scalar_t__ type; scalar_t__ length; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,struct evbuf_header*,int,struct evbuf_header*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_2(struct evbuf_header *VAR_8)
{
 struct sclp_diag_evbuf *VAR_9 = (struct sclp_diag_evbuf *) VAR_8;




 if (VAR_8->type != VAR_0 ||
     VAR_9->route != VAR_2 ||
     VAR_9->mdd.ftp.pcx != VAR_3 ||
     VAR_8->length < VAR_1)
  return;
 VAR_5 = VAR_9->mdd.ftp.ldflg;
 VAR_4 = VAR_9->mdd.ftp.fsize;
 VAR_6 = VAR_9->mdd.ftp.length;

 FUNC_0(&VAR_7);
}
