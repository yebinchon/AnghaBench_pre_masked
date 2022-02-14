
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_smd_channel {int fifo_size; } ;


 unsigned int FUNC_0 (struct qcom_smd_channel*,unsigned int) ;

__attribute__((used)) static size_t FUNC_1(struct qcom_smd_channel *VAR_0)
{
 unsigned VAR_1;
 unsigned VAR_2;
 unsigned VAR_3 = VAR_0->fifo_size - 1;

 VAR_1 = FUNC_0(VAR_0, VAR_1);
 VAR_2 = FUNC_0(VAR_0, VAR_2);

 return VAR_3 - ((VAR_1 - VAR_2) & VAR_3);
}
