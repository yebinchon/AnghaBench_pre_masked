
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct comedi_device*,int) ;
 int FUNC_7 (struct comedi_device*,int,int ) ;
 int FUNC_8 (struct comedi_device*,int,int ) ;
 int FUNC_9 (struct comedi_device*,int,int,int) ;

__attribute__((used)) static void FUNC_10(struct comedi_device *VAR_8)
{
 int VAR_9;
 u16 VAR_10 =

  FUNC_5(VAR_7) |

  FUNC_4(VAR_6) |

  FUNC_3(VAR_4) |

  FUNC_2(VAR_3) |

  FUNC_1(VAR_2) |

  FUNC_0(VAR_1);




 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  FUNC_9(VAR_8, VAR_9, VAR_10, 1);
  FUNC_8(VAR_8, VAR_9, 0);
  FUNC_6(VAR_8, VAR_9);
  FUNC_7(VAR_8, VAR_9, VAR_0);
 }
}
