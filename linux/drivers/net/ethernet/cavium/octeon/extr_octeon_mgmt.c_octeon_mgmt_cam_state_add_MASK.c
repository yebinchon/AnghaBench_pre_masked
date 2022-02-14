
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct octeon_mgmt_cam_state {int* cam; int cam_index; unsigned long long cam_mask; } ;



__attribute__((used)) static void FUNC_0(struct octeon_mgmt_cam_state *VAR_0,
          unsigned char *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 6; VAR_2++)
  VAR_0->cam[VAR_2] |= (u64)VAR_1[VAR_2] << (8 * (VAR_0->cam_index));
 VAR_0->cam_mask |= (1ULL << VAR_0->cam_index);
 VAR_0->cam_index++;
}
