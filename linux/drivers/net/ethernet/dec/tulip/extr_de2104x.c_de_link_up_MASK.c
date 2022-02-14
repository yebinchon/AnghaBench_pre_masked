
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct de_private {size_t media_type; int dev; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct de_private*,int ,int ,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct de_private *VAR_2)
{
 if (!FUNC_0(VAR_2->dev)) {
  FUNC_1(VAR_2->dev);
  FUNC_2(VAR_2, VAR_0, VAR_2->dev, "link up, media %s\n",
      VAR_1[VAR_2->media_type]);
 }
}
