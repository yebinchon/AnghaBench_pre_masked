
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esp_cmd_entry {int * sense_ptr; int sense_dma; } ;
struct esp {int flags; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct esp *VAR_3, struct esp_cmd_entry *VAR_4)
{
 if (!(VAR_3->flags & VAR_1))
  FUNC_0(VAR_3->dev, VAR_4->sense_dma,
     VAR_2, VAR_0);
 VAR_4->sense_ptr = ((void*)0);
}
