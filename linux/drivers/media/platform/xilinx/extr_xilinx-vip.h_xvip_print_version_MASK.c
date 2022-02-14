
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xvip_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (struct xvip_device*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct xvip_device *VAR_7)
{
 u32 VAR_8;

 VAR_8 = FUNC_1(VAR_7, VAR_0);

 FUNC_0(VAR_7->dev, "device found, version %u.%02x%x\n",
   ((VAR_8 & VAR_1) >>
    VAR_2),
   ((VAR_8 & VAR_3) >>
    VAR_4),
   ((VAR_8 & VAR_5) >>
    VAR_6));
}
