
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (unsigned long*) ;

__attribute__((used)) static __inline__ int FUNC_1(void)
{
 static unsigned long VAR_4, VAR_5;
 unsigned long VAR_6[VAR_1];
 int VAR_7;

 FUNC_0(VAR_6);



 VAR_7 = (VAR_6[VAR_2] != VAR_4) ||
    (VAR_6[VAR_3] != VAR_5);
 VAR_4 = VAR_6[VAR_2];
 VAR_5 = VAR_6[VAR_3];

 return (VAR_7 ? VAR_0 : 0);
}
