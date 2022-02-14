
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct cxgbit_wr_wait {int ret; int completion; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,char const*,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct cxgbit_wr_wait *VAR_2, const char *VAR_3, u8 VAR_4)
{
 if (VAR_4 == VAR_0)
  VAR_2->ret = 0;
 else
  VAR_2->ret = -VAR_1;

 if (VAR_2->ret)
  FUNC_1("%s: err:%u", VAR_3, VAR_4);

 FUNC_0(&VAR_2->completion);
}
