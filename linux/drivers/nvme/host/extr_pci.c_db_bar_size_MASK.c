
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_dev {unsigned int db_stride; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static unsigned long FUNC_0(struct nvme_dev *VAR_1, unsigned VAR_2)
{
 return VAR_0 + ((VAR_2 + 1) * 8 * VAR_1->db_stride);
}
