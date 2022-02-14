
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct hl_device {int dev; } ;
struct armcp_packet {int value; int ctl; } ;
typedef int pkt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct hl_device*,int *,int,int ,long*) ;
 int FUNC_4 (struct armcp_packet*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct hl_device *VAR_3, u16 VAR_4)
{
 struct armcp_packet VAR_5;
 long VAR_6;
 int VAR_7;

 FUNC_4(&VAR_5, 0, sizeof(VAR_5));

 VAR_5.ctl = FUNC_0(VAR_0 <<
    VAR_1);
 VAR_5.value = FUNC_1(VAR_4);

 VAR_7 = FUNC_3(VAR_3, (u32 *) &VAR_5, sizeof(VAR_5),
   VAR_2, &VAR_6);

 if (VAR_7)
  FUNC_2(VAR_3->dev, "failed to unmask RAZWI IRQ %d", VAR_4);

 return VAR_7;
}
