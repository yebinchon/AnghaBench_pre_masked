
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct channel_info {int dummy; } ;
struct c8sectpfei {int tsin_count; scalar_t__ c8sectpfeclk; scalar_t__ io; int dev; struct channel_info** channel_data; int * c8sectpfe; int fw_ack; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct c8sectpfei*) ;
 int FUNC_1 (int ,struct c8sectpfei*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct c8sectpfei*,struct channel_info*) ;
 struct c8sectpfei* FUNC_5 (struct platform_device*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_3)
{
 struct c8sectpfei *VAR_4 = FUNC_5(VAR_3);
 struct channel_info *VAR_5;
 int VAR_6;

 FUNC_7(&VAR_4->fw_ack);

 FUNC_1(VAR_4->c8sectpfe[0], VAR_4);




 for (VAR_6 = 0; VAR_6 < VAR_4->tsin_count; VAR_6++) {
  VAR_5 = VAR_4->channel_data[VAR_6];
  FUNC_4(VAR_4, VAR_5);
 }

 FUNC_0(VAR_4);

 FUNC_3(VAR_4->dev, "Stopping memdma SLIM core\n");
 if (FUNC_6(VAR_4->io + VAR_0))
  FUNC_8(0x0, VAR_4->io + VAR_0);


 if (FUNC_6(VAR_4->io + VAR_1))
  FUNC_8(0, VAR_4->io + VAR_1);

 if (FUNC_6(VAR_4->io + VAR_2))
  FUNC_8(0, VAR_4->io + VAR_2);

 if (VAR_4->c8sectpfeclk)
  FUNC_2(VAR_4->c8sectpfeclk);

 return 0;
}
