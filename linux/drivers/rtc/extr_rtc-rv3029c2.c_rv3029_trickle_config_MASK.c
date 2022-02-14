
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct rv3029_trickle_tab_elem {scalar_t__ r; scalar_t__ conf; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int FUNC_0 (struct rv3029_trickle_tab_elem*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,scalar_t__) ;
 int FUNC_3 (struct device_node*,char*,scalar_t__*) ;
 int FUNC_4 (struct device*,int ,int ,scalar_t__) ;
 struct rv3029_trickle_tab_elem* VAR_2 ;

__attribute__((used)) static void FUNC_5(struct device *VAR_3)
{
 struct device_node *VAR_4 = VAR_3->of_node;
 const struct rv3029_trickle_tab_elem *VAR_5;
 int VAR_6, VAR_7;
 u32 VAR_8;
 u8 VAR_9;

 if (!VAR_4)
  return;


 VAR_7 = FUNC_3(VAR_4, "trickle-resistor-ohms", &VAR_8);
 if (VAR_7) {

  VAR_9 = 0;
 } else {

  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
   VAR_5 = &VAR_2[VAR_6];
   if (VAR_5->r >= VAR_8)
    break;
  }
  VAR_9 = VAR_5->conf;
  FUNC_2(VAR_3,
    "Trickle charger enabled at %d ohms resistance.\n",
    VAR_5->r);
 }
 VAR_7 = FUNC_4(VAR_3, VAR_0,
     VAR_1,
     VAR_9);
 if (VAR_7 < 0)
  FUNC_1(VAR_3, "Failed to update trickle charger config\n");
}
