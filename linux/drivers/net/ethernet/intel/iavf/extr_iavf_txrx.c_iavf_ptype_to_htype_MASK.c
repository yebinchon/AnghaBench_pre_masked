
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iavf_rx_ptype_decoded {scalar_t__ outer_ip; scalar_t__ payload_layer; int known; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct iavf_rx_ptype_decoded FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(u8 VAR_7)
{
 struct iavf_rx_ptype_decoded VAR_8 = FUNC_0(VAR_7);

 if (!VAR_8.known)
  return VAR_6;

 if (VAR_8.outer_ip == VAR_0 &&
     VAR_8.payload_layer == VAR_2)
  return VAR_5;
 else if (VAR_8.outer_ip == VAR_0 &&
   VAR_8.payload_layer == VAR_1)
  return VAR_4;
 else
  return VAR_3;
}
