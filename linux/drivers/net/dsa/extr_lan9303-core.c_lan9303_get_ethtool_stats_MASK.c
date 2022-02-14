
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u32 ;
struct lan9303 {int dev; } ;
struct dsa_switch {struct lan9303* priv; } ;
struct TYPE_3__ {int offset; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,int,int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (struct lan9303*,int,int ,int *) ;

__attribute__((used)) static void FUNC_3(struct dsa_switch *VAR_1, int VAR_2,
          uint64_t *VAR_3)
{
 struct lan9303 *VAR_4 = VAR_1->priv;
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++) {
  u32 VAR_6;
  int VAR_7;

  VAR_7 = FUNC_2(
   VAR_4, VAR_2, VAR_0[VAR_5].offset, &VAR_6);

  if (VAR_7)
   FUNC_1(VAR_4->dev, "Reading status port %d reg %u failed\n",
     VAR_2, VAR_0[VAR_5].offset);
  VAR_3[VAR_5] = VAR_6;
 }
}
