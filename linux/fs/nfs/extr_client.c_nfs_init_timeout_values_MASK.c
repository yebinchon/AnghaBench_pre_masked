
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_timeout {int to_initval; int to_retries; int to_increment; void* to_maxval; int to_exponential; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




void FUNC_1(struct rpc_timeout *VAR_9, int VAR_10,
        int VAR_11, int VAR_12)
{
 VAR_9->to_initval = VAR_11 * VAR_0 / 10;
 VAR_9->to_retries = VAR_12;

 switch (VAR_10) {
 case 129:
 case 130:
  if (VAR_12 == VAR_7)
   VAR_9->to_retries = VAR_1;
  if (VAR_11 == VAR_8 || VAR_9->to_initval == 0)
   VAR_9->to_initval = VAR_2 * VAR_0 / 10;
  if (VAR_9->to_initval > VAR_5)
   VAR_9->to_initval = VAR_5;
  VAR_9->to_increment = VAR_9->to_initval;
  VAR_9->to_maxval = VAR_9->to_initval + (VAR_9->to_increment * VAR_9->to_retries);
  if (VAR_9->to_maxval > VAR_5)
   VAR_9->to_maxval = VAR_5;
  if (VAR_9->to_maxval < VAR_9->to_initval)
   VAR_9->to_maxval = VAR_9->to_initval;
  VAR_9->to_exponential = 0;
  break;
 case 128:
  if (VAR_12 == VAR_7)
   VAR_9->to_retries = VAR_3;
  if (VAR_11 == VAR_8 || VAR_9->to_initval == 0)
   VAR_9->to_initval = VAR_4 * VAR_0 / 10;
  if (VAR_9->to_initval > VAR_6)
   VAR_9->to_initval = VAR_6;
  VAR_9->to_maxval = VAR_6;
  VAR_9->to_exponential = 1;
  break;
 default:
  FUNC_0();
 }
}
