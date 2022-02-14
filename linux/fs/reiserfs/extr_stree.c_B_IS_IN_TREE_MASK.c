
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int dummy; } ;


 scalar_t__ FUNC_0 (struct buffer_head const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*,struct buffer_head const*,struct buffer_head const*) ;

inline int FUNC_2(const struct buffer_head *VAR_2)
{

 FUNC_1(FUNC_0(VAR_2) > VAR_1,
        "PAP-1010: block (%b) has too big level (%z)", VAR_2, VAR_2);

 return (FUNC_0(VAR_2) != VAR_0);
}
