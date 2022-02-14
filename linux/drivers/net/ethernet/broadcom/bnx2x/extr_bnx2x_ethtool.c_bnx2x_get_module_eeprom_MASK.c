
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {unsigned int offset; unsigned int len; } ;
struct TYPE_2__ {int * phy; } ;
struct bnx2x {TYPE_1__ link_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (int *,TYPE_1__*,int ,unsigned int,unsigned int,int *) ;
 int FUNC_5 (struct bnx2x*) ;
 struct bnx2x* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_8,
       struct ethtool_eeprom *VAR_9,
       u8 *VAR_10)
{
 struct bnx2x *VAR_11 = FUNC_6(VAR_8);
 int VAR_12 = -VAR_3, VAR_13;
 u8 *VAR_14 = VAR_10;
 unsigned int VAR_15 = VAR_9->offset, VAR_16 = 0;

 if (!FUNC_3(VAR_11)) {
  FUNC_0(VAR_0 | VAR_1,
     "cannot access eeprom when the interface is down\n");
  return -VAR_2;
 }

 VAR_13 = FUNC_2(VAR_11);


 if (VAR_15 < VAR_4) {

  if (VAR_15 + VAR_9->len > VAR_4)
   VAR_16 = VAR_4 - VAR_15;
  else
   VAR_16 = VAR_9->len;
  FUNC_1(VAR_11);
  VAR_12 = FUNC_4(&VAR_11->link_params.phy[VAR_13],
        &VAR_11->link_params,
        VAR_6,
        VAR_15,
        VAR_16,
        VAR_14);
  FUNC_5(VAR_11);
  if (VAR_12) {
   FUNC_0(VAR_0, "Failed reading A0 section\n");

   return -VAR_3;
  }
  VAR_14 += VAR_16;
  VAR_15 += VAR_16;
 }


 if ((VAR_15 >= VAR_4) &&
     (VAR_15 < VAR_5)) {
  VAR_16 = VAR_9->len - VAR_16;

  if (VAR_15 + VAR_16 > VAR_5)
   VAR_16 = VAR_5 - VAR_15;
  VAR_15 -= VAR_4;
  FUNC_1(VAR_11);
  VAR_12 = FUNC_4(&VAR_11->link_params.phy[VAR_13],
        &VAR_11->link_params,
        VAR_7,
        VAR_15,
        VAR_16,
        VAR_14);
  FUNC_5(VAR_11);
  if (VAR_12) {
   FUNC_0(VAR_0, "Failed reading A2 section\n");
   return -VAR_3;
  }
 }
 return VAR_12;
}
