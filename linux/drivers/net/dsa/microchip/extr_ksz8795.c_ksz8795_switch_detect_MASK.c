
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ksz_device {int chip_id; scalar_t__ cpu_port; int host_mask; scalar_t__ mib_port_cnt; void* port_cnt; void* last_port; void* phy_port_cnt; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct ksz_device*,int ,int*) ;
 int FUNC_2 (struct ksz_device*,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct ksz_device *VAR_10)
{
 u8 VAR_11, VAR_12;
 u16 VAR_13;
 int VAR_14;


 VAR_14 = FUNC_1(VAR_10, VAR_5, &VAR_13);
 if (VAR_14)
  return VAR_14;

 VAR_11 = VAR_13 >> 8;
 VAR_12 = VAR_13 & VAR_8;
 if (VAR_11 != VAR_3 ||
     (VAR_12 != VAR_0 && VAR_12 != VAR_1))
  return -VAR_2;

 VAR_10->mib_port_cnt = VAR_9;
 VAR_10->phy_port_cnt = VAR_7;
 VAR_10->port_cnt = VAR_7;

 if (VAR_12 == VAR_1) {
  u8 VAR_15;

  VAR_12 = 0x95;
  FUNC_2(VAR_10, VAR_6, &VAR_15);
  if (VAR_15 & VAR_4)
   VAR_12 = 0x65;
 } else if (VAR_12 == VAR_0) {
  VAR_10->port_cnt--;
  VAR_10->last_port = VAR_10->port_cnt;
  VAR_12 = 0x94;
 }
 VAR_13 &= ~0xff;
 VAR_13 |= VAR_12;
 VAR_10->chip_id = VAR_13;

 VAR_10->cpu_port = VAR_10->mib_port_cnt - 1;
 VAR_10->host_mask = FUNC_0(VAR_10->cpu_port);

 return 0;
}
