
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct nicvf {int sqs_id; scalar_t__ sqs_mode; } ;


 int VAR_0 ;

__attribute__((used)) static inline u8 FUNC_0(struct nicvf *VAR_1, u8 VAR_2)
{
 if (VAR_1->sqs_mode)
  return VAR_2 + ((VAR_1->sqs_id + 1) * VAR_0);
 else
  return VAR_2;
}
