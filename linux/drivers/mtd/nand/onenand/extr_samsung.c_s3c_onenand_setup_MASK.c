
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct onenand_chip {int write_bufferram; int read_bufferram; int command; int unlock_all; int bbt_wait; int wait; int write_word; int read_word; int chip_probe; } ;
struct mtd_info {struct onenand_chip* priv; } ;
struct TYPE_2__ {scalar_t__ type; void* cmd_map; int mem_addr; struct mtd_info* mtd; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static void FUNC_1(struct mtd_info *VAR_17)
{
 struct onenand_chip *VAR_18 = VAR_17->priv;

 VAR_3->mtd = VAR_17;

 if (VAR_3->type == VAR_0) {
  VAR_3->mem_addr = VAR_6;
  VAR_3->cmd_map = VAR_8;
 } else if (VAR_3->type == VAR_1) {
  VAR_3->mem_addr = VAR_7;
  VAR_3->cmd_map = VAR_8;
 } else if (VAR_3->type == VAR_2) {

  VAR_18->read_bufferram = VAR_16;
  VAR_18->chip_probe = VAR_15;
  return;
 } else {
  FUNC_0();
 }

 VAR_18->read_word = VAR_11;
 VAR_18->write_word = VAR_13;

 VAR_18->wait = VAR_12;
 VAR_18->bbt_wait = VAR_9;
 VAR_18->unlock_all = VAR_14;
 VAR_18->command = VAR_10;

 VAR_18->read_bufferram = VAR_4;
 VAR_18->write_bufferram = VAR_5;
}
