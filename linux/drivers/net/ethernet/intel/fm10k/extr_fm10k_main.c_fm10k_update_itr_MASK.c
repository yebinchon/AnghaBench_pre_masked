
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm10k_ring_container {unsigned int itr; unsigned int total_packets; unsigned int total_bytes; int itr_scale; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct fm10k_ring_container *VAR_1)
{
 unsigned int VAR_2, VAR_3, VAR_4;


 if (!FUNC_1(VAR_1->itr))
  goto clear_counts;

 VAR_3 = VAR_1->total_packets;
 if (!VAR_3)
  goto clear_counts;

 VAR_2 = VAR_1->total_bytes / VAR_3;
 if (VAR_2 <= 360) {

  VAR_2 *= 8;
  VAR_2 += 376;
 } else if (VAR_2 <= 1152) {

  VAR_2 *= 3;
  VAR_2 += 2176;
 } else if (VAR_2 <= 1920) {

  VAR_2 += 4480;
 } else {

  VAR_2 = 6656;
 }





 VAR_4 = FUNC_2(VAR_1->itr_scale) + 8;
 VAR_2 += FUNC_0(VAR_4) - 1;
 VAR_2 >>= VAR_4;


 VAR_1->itr = VAR_2 | VAR_0;

clear_counts:
 VAR_1->total_bytes = 0;
 VAR_1->total_packets = 0;
}
