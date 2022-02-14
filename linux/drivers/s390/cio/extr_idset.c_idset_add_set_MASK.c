
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idset {int num_ssid; int num_id; int bitmap; } ;


 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int,int) ;

void FUNC_2(struct idset *VAR_0, struct idset *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0->num_ssid * VAR_0->num_id, VAR_1->num_ssid * VAR_1->num_id);

 FUNC_0(VAR_0->bitmap, VAR_0->bitmap, VAR_1->bitmap, VAR_2);
}
