
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct hl_device {int dev; scalar_t__ pldm; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int ,int,int) ;
 int FUNC_2 (struct hl_device*,int ,int,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct hl_device *VAR_3, u64 VAR_4,
  int VAR_5, bool VAR_6)
{
 int VAR_7;
 u32 VAR_8, VAR_9;

 if (VAR_3->pldm)
  VAR_9 = VAR_2;
 else
  VAR_9 = VAR_0;

 VAR_7 = FUNC_2(
  VAR_3,
  VAR_4,
  VAR_8,
  VAR_6 ? VAR_8 & FUNC_0(VAR_5) : !(VAR_8 & FUNC_0(VAR_5)),
  1000,
  VAR_9);

 if (VAR_7) {
  FUNC_1(VAR_3->dev,
   "Timeout while waiting for coresight, addr: 0x%llx, position: %d, up: %d\n",
    VAR_4, VAR_5, VAR_6);
  return -VAR_1;
 }

 return 0;
}
