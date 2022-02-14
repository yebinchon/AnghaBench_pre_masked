
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,int,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_3, bool VAR_4)
{
 int VAR_5 = (int)(long)VAR_3;
 char VAR_6[4] = { 0x01, 0x00, VAR_5, !VAR_4 };
 int VAR_7;

 VAR_7 = FUNC_0(VAR_1, VAR_2,
       VAR_6, sizeof(VAR_6), 0);

 return VAR_7 <= 0 ? VAR_7 : -VAR_0;
}
