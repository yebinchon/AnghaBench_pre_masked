
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netcp_packet {int psdata_len; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct netcp_packet *VAR_1,
         unsigned int VAR_2)
{
 int VAR_3;

 switch (VAR_2) {
 case 0:
  VAR_3 = -VAR_0;
  break;
 case 1:
 case 2:
 case 4:
  VAR_3 = 0;
  break;
 case 8:
  VAR_3 = (VAR_1->psdata_len << 2) % 8;
  break;
 case 16:
  VAR_3 = (VAR_1->psdata_len << 2) % 16;
  break;
 default:
  VAR_3 = (VAR_1->psdata_len << 2) % VAR_2;
  break;
 }
 return VAR_3;
}
