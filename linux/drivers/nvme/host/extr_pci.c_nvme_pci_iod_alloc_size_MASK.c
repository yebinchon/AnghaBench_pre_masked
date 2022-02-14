
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct nvme_dev {int dummy; } ;
typedef int __le64 ;


 int FUNC_0 (unsigned int,struct nvme_dev*) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static unsigned int FUNC_2(struct nvme_dev *VAR_0,
  unsigned int VAR_1, unsigned int VAR_2, bool VAR_3)
{
 size_t VAR_4;

 if (VAR_3)
  VAR_4 = sizeof(__le64 *) * FUNC_1(VAR_2);
 else
  VAR_4 = sizeof(__le64 *) * FUNC_0(VAR_1, VAR_0);

 return VAR_4 + sizeof(struct scatterlist) * VAR_2;
}
