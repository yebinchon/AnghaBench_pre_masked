
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ramoops_context {scalar_t__ dump_read_cnt; scalar_t__ max_dump_cnt; int flags; scalar_t__ ftrace_read_cnt; scalar_t__ max_ftrace_cnt; int * fprzs; int mprz; int pmsg_read_cnt; int cprz; int console_read_cnt; int * dprzs; } ;
struct TYPE_4__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct pstore_record {int compressed; scalar_t__ ecc_notice_size; int * buf; scalar_t__ id; TYPE_2__ time; TYPE_1__* psi; } ;
struct persistent_ram_zone {struct persistent_ram_zone* old_log; scalar_t__ bad_blocks; scalar_t__ corrected_bytes; int ecc_info; } ;
typedef int ssize_t ;
struct TYPE_3__ {struct ramoops_context* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct persistent_ram_zone*,struct persistent_ram_zone*) ;
 int FUNC_1 (struct persistent_ram_zone*) ;
 int * FUNC_2 (scalar_t__,int ) ;
 struct persistent_ram_zone* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,char*,int) ;
 scalar_t__ FUNC_5 (struct persistent_ram_zone*,int *,scalar_t__) ;
 int FUNC_6 (struct persistent_ram_zone*) ;
 scalar_t__ FUNC_7 (struct persistent_ram_zone*) ;
 int FUNC_8 (struct persistent_ram_zone*) ;
 int FUNC_9 (struct persistent_ram_zone*) ;
 int FUNC_10 (struct persistent_ram_zone*) ;
 struct persistent_ram_zone* FUNC_11 (int *,int ,struct pstore_record*) ;
 int FUNC_12 (scalar_t__,TYPE_2__*,int*) ;

__attribute__((used)) static ssize_t FUNC_13(struct pstore_record *VAR_3)
{
 ssize_t VAR_4 = 0;
 struct ramoops_context *VAR_5 = VAR_3->psi->data;
 struct persistent_ram_zone *VAR_6 = ((void*)0);
 int VAR_7 = 0;
 bool VAR_8 = 0;






 VAR_3->time.tv_sec = 0;
 VAR_3->time.tv_nsec = 0;
 VAR_3->compressed = 0;


 while (VAR_5->dump_read_cnt < VAR_5->max_dump_cnt && !VAR_6) {
  VAR_6 = FUNC_11(VAR_5->dprzs, VAR_5->dump_read_cnt++,
        VAR_3);
  if (!FUNC_10(VAR_6))
   continue;
  VAR_7 = FUNC_12(FUNC_7(VAR_6),
            &VAR_3->time,
            &VAR_3->compressed);

  if (!VAR_7) {
   FUNC_6(VAR_6);
   FUNC_9(VAR_6);
   VAR_6 = ((void*)0);
  }
 }

 if (!FUNC_10(VAR_6) && !VAR_5->console_read_cnt++)
  VAR_6 = FUNC_11(&VAR_5->cprz, 0 , VAR_3);

 if (!FUNC_10(VAR_6) && !VAR_5->pmsg_read_cnt++)
  VAR_6 = FUNC_11(&VAR_5->mprz, 0 , VAR_3);


 if (!FUNC_10(VAR_6)) {
  if (!(VAR_5->flags & VAR_2) &&
      !VAR_5->ftrace_read_cnt++) {
   VAR_6 = FUNC_11(VAR_5->fprzs, 0 ,
         VAR_3);
  } else {




   struct persistent_ram_zone *VAR_9, *VAR_10;

   VAR_9 = FUNC_3(sizeof(struct persistent_ram_zone),
       VAR_1);
   if (!VAR_9)
    return -VAR_0;
   VAR_6 = VAR_9;
   VAR_8 = 1;

   while (VAR_5->ftrace_read_cnt < VAR_5->max_ftrace_cnt) {
    VAR_10 = FUNC_11(VAR_5->fprzs,
      VAR_5->ftrace_read_cnt++, VAR_3);

    if (!FUNC_10(VAR_10))
     continue;

    VAR_9->ecc_info = VAR_10->ecc_info;
    VAR_9->corrected_bytes +=
      VAR_10->corrected_bytes;
    VAR_9->bad_blocks += VAR_10->bad_blocks;
    VAR_4 = FUNC_0(VAR_9, VAR_10);
    if (VAR_4)
     goto out;
   }
   VAR_3->id = 0;
  }
 }

 if (!FUNC_10(VAR_6)) {
  VAR_4 = 0;
  goto out;
 }

 VAR_4 = FUNC_8(VAR_6) - VAR_7;


 VAR_3->ecc_notice_size = FUNC_5(VAR_6, ((void*)0), 0);

 VAR_3->buf = FUNC_2(VAR_4 + VAR_3->ecc_notice_size + 1, VAR_1);
 if (VAR_3->buf == ((void*)0)) {
  VAR_4 = -VAR_0;
  goto out;
 }

 FUNC_4(VAR_3->buf, (char *)FUNC_7(VAR_6) + VAR_7,
        VAR_4);

 FUNC_5(VAR_6, VAR_3->buf + VAR_4,
      VAR_3->ecc_notice_size + 1);

out:
 if (VAR_8) {
  FUNC_1(VAR_6->old_log);
  FUNC_1(VAR_6);
 }

 return VAR_4;
}
