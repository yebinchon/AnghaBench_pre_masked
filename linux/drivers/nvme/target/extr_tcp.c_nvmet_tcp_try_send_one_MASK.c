
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_tcp_queue {scalar_t__ state; struct nvmet_tcp_cmd* snd_cmd; } ;
struct nvmet_tcp_cmd {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct nvmet_tcp_cmd* FUNC_0 (struct nvmet_tcp_queue*) ;
 int FUNC_1 (struct nvmet_tcp_cmd*) ;
 int FUNC_2 (struct nvmet_tcp_cmd*) ;
 int FUNC_3 (struct nvmet_tcp_cmd*) ;
 int FUNC_4 (struct nvmet_tcp_cmd*,int) ;
 int FUNC_5 (struct nvmet_tcp_cmd*,int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct nvmet_tcp_queue *VAR_7,
  bool VAR_8)
{
 struct nvmet_tcp_cmd *VAR_9 = VAR_7->snd_cmd;
 int VAR_10 = 0;

 if (!VAR_9 || VAR_7->state == VAR_1) {
  VAR_9 = FUNC_0(VAR_7);
  if (FUNC_6(!VAR_9))
   return 0;
 }

 if (VAR_9->state == VAR_3) {
  VAR_10 = FUNC_2(VAR_9);
  if (VAR_10 <= 0)
   goto done_send;
 }

 if (VAR_9->state == VAR_2) {
  VAR_10 = FUNC_1(VAR_9);
  if (VAR_10 <= 0)
   goto done_send;
 }

 if (VAR_9->state == VAR_4) {
  VAR_10 = FUNC_3(VAR_9);
  if (VAR_10 <= 0)
   goto done_send;
 }

 if (VAR_9->state == VAR_5) {
  VAR_10 = FUNC_4(VAR_9, VAR_8);
  if (VAR_10 <= 0)
   goto done_send;
 }

 if (VAR_9->state == VAR_6)
  VAR_10 = FUNC_5(VAR_9, VAR_8);

done_send:
 if (VAR_10 < 0) {
  if (VAR_10 == -VAR_0)
   return 0;
  return VAR_10;
 }

 return 1;
}
