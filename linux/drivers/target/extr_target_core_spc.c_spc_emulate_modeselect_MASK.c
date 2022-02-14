
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned char u8 ;
struct se_cmd {char* t_task_cdb; int data_length; } ;
typedef scalar_t__ sense_reason_t ;
struct TYPE_3__ {unsigned char page; unsigned char subpage; int (* emulate ) (struct se_cmd*,int ,unsigned char*) ;} ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (unsigned char*,unsigned char*,int) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 TYPE_1__* VAR_8 ;
 int FUNC_3 (struct se_cmd*,int ,unsigned char*) ;
 int FUNC_4 (struct se_cmd*,int ) ;
 unsigned char* FUNC_5 (struct se_cmd*) ;
 int FUNC_6 (struct se_cmd*) ;

__attribute__((used)) static sense_reason_t FUNC_7(struct se_cmd *VAR_9)
{
 char *VAR_10 = VAR_9->t_task_cdb;
 bool VAR_11 = VAR_10[0] == VAR_1;
 int VAR_12 = VAR_11 ? 8 : 4;
 bool VAR_13 = !!(VAR_10[1] & 0x10);
 u8 VAR_14, VAR_15;
 unsigned char *VAR_16;
 unsigned char VAR_17[VAR_2];
 int VAR_18;
 sense_reason_t VAR_19 = 0;
 int VAR_20;

 if (!VAR_9->data_length) {
  FUNC_4(VAR_9, VAR_0);
  return 0;
 }

 if (VAR_9->data_length < VAR_12 + 2)
  return VAR_6;

 VAR_16 = FUNC_5(VAR_9);
 if (!VAR_16)
  return VAR_5;

 if (!VAR_13) {
  VAR_19 = VAR_3;
  goto out;
 }

 VAR_14 = VAR_16[VAR_12] & 0x3f;
 VAR_15 = VAR_16[VAR_12] & 0x40 ? VAR_16[VAR_12 + 1] : 0;

 for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_8); ++VAR_20)
  if (VAR_8[VAR_20].page == VAR_14 &&
      VAR_8[VAR_20].subpage == VAR_15) {
   FUNC_2(VAR_17, 0, VAR_2);
   VAR_18 = VAR_8[VAR_20].emulate(VAR_9, 0, VAR_17);
   goto check_contents;
  }

 VAR_19 = VAR_7;
 goto out;

check_contents:
 if (VAR_9->data_length < VAR_12 + VAR_18) {
  VAR_19 = VAR_6;
  goto out;
 }

 if (FUNC_1(VAR_16 + VAR_12, VAR_17, VAR_18))
  VAR_19 = VAR_4;

out:
 FUNC_6(VAR_9);

 if (!VAR_19)
  FUNC_4(VAR_9, VAR_0);
 return VAR_19;
}
