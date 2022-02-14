
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alx_hw {int duplex; int link_speed; } ;







 int FUNC_0 (int ,int ) ;

__attribute__((used)) static const char *FUNC_1(struct alx_hw *VAR_0)
{
 switch (FUNC_0(VAR_0->link_speed, VAR_0->duplex)) {
 case 132:
  return "1 Gbps Full";
 case 131:
  return "100 Mbps Full";
 case 130:
  return "100 Mbps Half";
 case 129:
  return "10 Mbps Full";
 case 128:
  return "10 Mbps Half";
 default:
  return "Unknown speed";
 }
}
