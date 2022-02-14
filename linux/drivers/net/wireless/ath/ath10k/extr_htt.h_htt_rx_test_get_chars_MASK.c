
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct htt_rx_test {int num_ints; int * payload; } ;
typedef int __le32 ;



__attribute__((used)) static inline u8 *FUNC_0(struct htt_rx_test *VAR_0)
{
 return VAR_0->payload + (VAR_0->num_ints * sizeof(__le32));
}
