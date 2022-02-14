
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usbnet*,int ,int ,int ,int,int*) ;

__attribute__((used)) static inline int FUNC_1(struct usbnet *VAR_5, u16 VAR_6,
        u16 VAR_7)
{
 u16 VAR_8;
 int VAR_9;

 VAR_8 = VAR_7;
 VAR_9 = FUNC_0(VAR_5, VAR_1, VAR_0,
    VAR_2, 2, &VAR_8);

 VAR_8 = VAR_6;
 VAR_9 = FUNC_0(VAR_5, VAR_1, VAR_0,
    VAR_4, 2, &VAR_8);

 VAR_8 = VAR_7 | VAR_3;
 VAR_9 = FUNC_0(VAR_5, VAR_1, VAR_0,
    VAR_2, 2, &VAR_8);

 return VAR_9;
}
