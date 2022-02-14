
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int base_addr; int irq; int name; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (char*,int ,int ,int ,...) ;
 int FUNC_5 (int ,int ,int ,int ,struct net_device*) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_7)
{
 int VAR_8 = VAR_7->base_addr;
 int VAR_9;

 FUNC_3(VAR_4, VAR_8 + VAR_0);
 FUNC_3(VAR_2, VAR_8 + VAR_0);
 FUNC_3(VAR_3 | 0x00, VAR_8 + VAR_0);

 VAR_9 = FUNC_5(VAR_7->irq, VAR_6, 0, VAR_7->name, VAR_7);
 if (VAR_9)
  return VAR_9;

 FUNC_0(0);
 if (VAR_5 > 3)
  FUNC_4("%s: Opening, IRQ %d	 status@%x %4.4x.\n", VAR_7->name,
      VAR_7->irq, VAR_8 + VAR_1, FUNC_2(VAR_8 + VAR_1));

 FUNC_1(VAR_7);

 if (VAR_5 > 3)
  FUNC_4("%s: Opened 3c509  IRQ %d  status %4.4x.\n",
      VAR_7->name, VAR_7->irq, FUNC_2(VAR_8 + VAR_1));

 return 0;
}
