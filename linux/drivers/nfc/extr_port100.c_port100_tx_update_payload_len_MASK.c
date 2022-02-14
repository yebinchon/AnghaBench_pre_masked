
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port100_frame {int datalen; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, int VAR_1)
{
 struct port100_frame *VAR_2 = VAR_0;

 VAR_2->datalen = FUNC_0(FUNC_1(VAR_2->datalen) + VAR_1);
}
