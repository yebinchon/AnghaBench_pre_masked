
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hv_ops {int (* flush ) (int ,int) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(const struct hv_ops *VAR_0, uint32_t VAR_1, bool VAR_2)
{
 if (VAR_2)
  FUNC_0();

 if (VAR_0->flush)
  return VAR_0->flush(VAR_1, VAR_2);
 return 0;
}
