
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hva_dev {scalar_t__ nb_of_encoders; TYPE_1__** encoders; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int name; } ;


 unsigned int FUNC_0 (TYPE_1__**) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,char*,int ,int ,scalar_t__) ;
 int FUNC_2 (struct device*,char*,int ,int ) ;
 TYPE_1__** VAR_2 ;
 struct device* FUNC_3 (struct hva_dev*) ;

__attribute__((used)) static void FUNC_4(struct hva_dev *VAR_3)
{
 struct device *VAR_4 = FUNC_3(VAR_3);
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
  if (VAR_3->nb_of_encoders >= VAR_0) {
   FUNC_1(VAR_4,
    "%s failed to register %s encoder (%d maximum reached)\n",
    VAR_1, VAR_2[VAR_5]->name,
    VAR_0);
   return;
  }

  VAR_3->encoders[VAR_3->nb_of_encoders++] = VAR_2[VAR_5];
  FUNC_2(VAR_4, "%s %s encoder registered\n", VAR_1,
    VAR_2[VAR_5]->name);
 }
}
