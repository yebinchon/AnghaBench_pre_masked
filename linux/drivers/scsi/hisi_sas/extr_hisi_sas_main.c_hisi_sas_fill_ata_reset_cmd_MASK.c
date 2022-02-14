
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ata_taskfile {int command; int ctl; } ;
struct ata_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ata_device*,struct ata_taskfile*) ;
 int FUNC_1 (struct ata_taskfile*,int,int ,int *) ;

__attribute__((used)) static void FUNC_2(struct ata_device *VAR_2,
  bool VAR_3, int VAR_4, u8 *VAR_5)
{
 struct ata_taskfile VAR_6;

 FUNC_0(VAR_2, &VAR_6);
 if (VAR_3)
  VAR_6.ctl |= VAR_1;
 else
  VAR_6.ctl &= ~VAR_1;
 VAR_6.command = VAR_0;
 FUNC_1(&VAR_6, VAR_4, 0, VAR_5);
}
