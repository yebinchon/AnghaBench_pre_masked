
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfb_info {int fb; int mem_ctl2; int mem_ctl1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct cfb_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cfb_info*) ;

__attribute__((used)) static void FUNC_3(struct cfb_info *VAR_2)
{
 FUNC_2(VAR_2);




 FUNC_0(VAR_0, VAR_2->mem_ctl1, VAR_2);
 FUNC_0(VAR_1, VAR_2->mem_ctl2, VAR_2);





 FUNC_1(&VAR_2->fb);
}
