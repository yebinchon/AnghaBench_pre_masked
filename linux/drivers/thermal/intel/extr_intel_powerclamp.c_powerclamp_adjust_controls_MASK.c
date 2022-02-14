
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 unsigned int VAR_0 ;
 int FUNC_3 (int,int) ;
 int VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_2 ;
 unsigned int VAR_3 ;

__attribute__((used)) static bool FUNC_7(unsigned int VAR_4,
    unsigned int VAR_5, unsigned int VAR_6)
{
 static u64 VAR_7, VAR_8;
 u64 VAR_9, VAR_10;
 u64 VAR_11;


 VAR_9 = FUNC_5();
 VAR_10 = FUNC_6();


 if (!VAR_7 || !VAR_8)
  VAR_0 = 1;
 else if (VAR_10-VAR_8) {
  VAR_11 = 100*(VAR_9-VAR_7);
  FUNC_3(VAR_11, (VAR_10-VAR_8));
  VAR_0 = VAR_11;
 }


 VAR_7 = VAR_9;
 VAR_8 = VAR_10;

 FUNC_0(VAR_4, VAR_6);




 VAR_2 = FUNC_1(&VAR_1) >=
  2 * VAR_6 * FUNC_4();

 FUNC_2(&VAR_1, 0);

 return VAR_3 + VAR_5 <= VAR_0;
}
