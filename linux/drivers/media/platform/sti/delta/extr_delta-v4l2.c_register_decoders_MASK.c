
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct delta_dev {scalar_t__ nb_of_decoders; int dev; TYPE_1__** decoders; } ;
struct TYPE_3__ {int name; } ;


 unsigned int FUNC_0 (TYPE_1__**) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__** VAR_2 ;
 int FUNC_1 (int ,char*,int ,int ,scalar_t__) ;
 int FUNC_2 (int ,char*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct delta_dev *VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++) {
  if (VAR_3->nb_of_decoders >= VAR_0) {
   FUNC_1(VAR_3->dev,
    "%s failed to register %s decoder (%d maximum reached)\n",
    VAR_1, VAR_2[VAR_4]->name,
    VAR_0);
   return;
  }

  VAR_3->decoders[VAR_3->nb_of_decoders++] = VAR_2[VAR_4];
  FUNC_2(VAR_3->dev, "%s %s decoder registered\n",
    VAR_1, VAR_2[VAR_4]->name);
 }
}
