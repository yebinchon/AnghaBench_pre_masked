
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netcp_packet {scalar_t__ psdata_len; int * psdata; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline u32 *FUNC_0(struct netcp_packet *VAR_1,
         unsigned int VAR_2)
{
 u32 *VAR_3;
 unsigned int VAR_4;

 if ((VAR_2 & 0x03) != 0)
  return ((void*)0);
 VAR_4 = VAR_2 >> 2;

 if ((VAR_1->psdata_len + VAR_4) > VAR_0)
  return ((void*)0);

 VAR_1->psdata_len += VAR_4;
 VAR_3 = &VAR_1->psdata[VAR_0 - VAR_1->psdata_len];
 return VAR_3;
}
