
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct gb_svc {int dummy; } ;
struct gb_camera {TYPE_2__* connection; } ;
struct TYPE_4__ {TYPE_1__* hd; } ;
struct TYPE_3__ {struct gb_svc* svc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct gb_svc*,int ,int ,int ,int,int,int ,int ,int ,int,int,int,int ,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct gb_camera *VAR_7, u8 VAR_8,
      bool VAR_9)
{
 struct gb_svc *VAR_10 = VAR_7->connection->hd->svc;
 int VAR_11;

 if (VAR_9)
  VAR_11 = FUNC_0(VAR_10, VAR_8,
       VAR_5,
       VAR_4, 2, 2,
       VAR_3,
       VAR_0,
       VAR_4, 2, 2,
       VAR_1 |
       VAR_2, 0,
       ((void*)0), ((void*)0));
 else
  VAR_11 = FUNC_0(VAR_10, VAR_8,
       VAR_5,
       VAR_6,
       2, 1,
       VAR_3,
       VAR_0,
       VAR_6,
       2, 1,
       0, 0,
       ((void*)0), ((void*)0));

 return VAR_11;
}
