
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sas_task {struct ata_queued_cmd* uldd_task; } ;
struct TYPE_2__ {scalar_t__ command; } ;
struct ata_queued_cmd {int tag; TYPE_1__ tf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

u32 FUNC_0(struct sas_task *VAR_5, u32 *VAR_6)
{
 struct ata_queued_cmd *VAR_7 = VAR_5->uldd_task;
 if (VAR_7) {
  if (VAR_7->tf.command == VAR_3 ||
      VAR_7->tf.command == VAR_0 ||
      VAR_7->tf.command == VAR_1 ||
      VAR_7->tf.command == VAR_2 ||
      VAR_7->tf.command == VAR_4) {
   *VAR_6 = VAR_7->tag;
   return 1;
  }
 }
 return 0;
}
