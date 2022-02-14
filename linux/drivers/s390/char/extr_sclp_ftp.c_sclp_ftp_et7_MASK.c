
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sclp_req {scalar_t__ status; struct completion* callback_data; int callback; struct sclp_diag_sccb* sccb; int command; } ;
struct TYPE_10__ {int response_code; void* length; } ;
struct TYPE_8__ {int flags; void* length; int type; } ;
struct TYPE_6__ {int fident; int bufaddr; int length; int offset; int cmd; scalar_t__ fsize; int ldflg; int asce; scalar_t__ pgsize; scalar_t__ srcflg; int pcx; } ;
struct TYPE_7__ {TYPE_1__ ftp; } ;
struct TYPE_9__ {TYPE_3__ hdr; TYPE_2__ mdd; int route; } ;
struct sclp_diag_sccb {TYPE_5__ hdr; TYPE_4__ evbuf; } ;
struct sccb_header {int dummy; } ;
struct hmcdrv_ftp_cmdspec {int fname; int buf; int len; int ofs; int id; } ;
struct completion {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct completion*) ;
 int FUNC_3 (struct sclp_req*) ;
 struct sclp_req* FUNC_4 (int,int) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (struct sclp_req*) ;
 int VAR_15 ;
 size_t FUNC_7 (int ,int ,size_t) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct completion*) ;

__attribute__((used)) static int FUNC_10(const struct hmcdrv_ftp_cmdspec *VAR_16)
{
 struct completion VAR_17;
 struct sclp_diag_sccb *VAR_18;
 struct sclp_req *VAR_19;
 size_t VAR_20;
 int VAR_21;

 VAR_19 = FUNC_4(sizeof(*VAR_19), VAR_5);
 VAR_18 = (void *) FUNC_1(VAR_5 | VAR_4);
 if (!VAR_19 || !VAR_18) {
  VAR_21 = -VAR_2;
  goto out_free;
 }

 VAR_18->hdr.length = VAR_8 +
  sizeof(struct sccb_header);
 VAR_18->evbuf.hdr.type = VAR_3;
 VAR_18->evbuf.hdr.length = VAR_8;
 VAR_18->evbuf.hdr.flags = 0;
 VAR_18->evbuf.route = VAR_10;
 VAR_18->evbuf.mdd.ftp.pcx = VAR_11;
 VAR_18->evbuf.mdd.ftp.srcflg = 0;
 VAR_18->evbuf.mdd.ftp.pgsize = 0;
 VAR_18->evbuf.mdd.ftp.asce = VAR_14;
 VAR_18->evbuf.mdd.ftp.ldflg = VAR_9;
 VAR_18->evbuf.mdd.ftp.fsize = 0;
 VAR_18->evbuf.mdd.ftp.cmd = VAR_16->id;
 VAR_18->evbuf.mdd.ftp.offset = VAR_16->ofs;
 VAR_18->evbuf.mdd.ftp.length = VAR_16->len;
 VAR_18->evbuf.mdd.ftp.bufaddr = FUNC_8(VAR_16->buf);

 VAR_20 = FUNC_7(VAR_18->evbuf.mdd.ftp.fident, VAR_16->fname,
        VAR_6);
 if (VAR_20 >= VAR_6) {
  VAR_21 = -VAR_0;
  goto out_free;
 }

 VAR_19->command = VAR_7;
 VAR_19->sccb = VAR_18;
 VAR_19->status = VAR_13;
 VAR_19->callback = VAR_15;
 VAR_19->callback_data = &VAR_17;

 FUNC_2(&VAR_17);

 VAR_21 = FUNC_6(VAR_19);
 if (VAR_21)
  goto out_free;


 FUNC_9(&VAR_17);
 if (VAR_19->status != VAR_12 ||
     (VAR_18->evbuf.hdr.flags & 0x80) == 0 ||
     (VAR_18->hdr.response_code & 0xffU) != 0x20U) {
  VAR_21 = -VAR_1;
 }

out_free:
 FUNC_0((unsigned long) VAR_18);
 FUNC_3(VAR_19);
 return VAR_21;
}
