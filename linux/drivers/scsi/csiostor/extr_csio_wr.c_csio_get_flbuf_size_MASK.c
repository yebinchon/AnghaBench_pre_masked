
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct csio_sge {int * sge_fl_buf_size; } ;
struct csio_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct csio_hw*,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct csio_hw *VAR_1, struct csio_sge *VAR_2, uint32_t VAR_3)
{
 VAR_2->sge_fl_buf_size[VAR_3] = FUNC_0(VAR_1, VAR_0 +
       VAR_3 * sizeof(uint32_t));
}
