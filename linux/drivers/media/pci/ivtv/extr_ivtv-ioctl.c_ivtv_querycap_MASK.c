
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_capability {int capabilities; int bus_info; int card; int driver; } ;
struct ivtv_open_id {struct ivtv* itv; } ;
struct ivtv {int v4l2_cap; int pdev; int card_name; } ;
struct file {int private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ivtv_open_id* FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,int,char*,char*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, void *VAR_3, struct v4l2_capability *VAR_4)
{
 struct ivtv_open_id *VAR_5 = FUNC_0(VAR_2->private_data);
 struct ivtv *VAR_6 = VAR_5->itv;

 FUNC_3(VAR_4->driver, VAR_0, sizeof(VAR_4->driver));
 FUNC_3(VAR_4->card, VAR_6->card_name, sizeof(VAR_4->card));
 FUNC_2(VAR_4->bus_info, sizeof(VAR_4->bus_info), "PCI:%s", FUNC_1(VAR_6->pdev));
 VAR_4->capabilities = VAR_6->v4l2_cap | VAR_1;
 return 0;
}
